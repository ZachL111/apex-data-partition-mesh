# Apex Data Partition Mesh Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 238 | ship |
| stress | lineage depth | 241 | ship |
| edge | partition skew | 193 | ship |
| recovery | quality gap | 178 | ship |
| stale | schema drift | 192 | ship |

Start with `stress` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
