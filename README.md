# apex-data-partition-mesh

`apex-data-partition-mesh` explores data engineering with a small C++ codebase and local fixtures. The technical goal is to build a C++ toolkit that studies partition behavior through seeded input scenarios, with deterministic summary checks and no network dependency.

## Problem It Tries To Make Smaller

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Apex Data Partition Mesh Review Notes

For a quick review, compare `lineage depth` with `quality gap` before reading the middle cases.

## Working Pieces

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/apex-data-partition-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `lineage depth` and `quality gap`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Design Notes

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Example Run

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Known Limits

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
