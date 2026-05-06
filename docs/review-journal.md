# Review Journal

I treated `apex-data-partition-mesh` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 238, lane `ship`
- `stress`: `lineage depth`, score 241, lane `ship`
- `edge`: `partition skew`, score 193, lane `ship`
- `recovery`: `quality gap`, score 178, lane `ship`
- `stale`: `schema drift`, score 192, lane `ship`

## Note

The repository should be understandable without pretending it is larger than it is.
