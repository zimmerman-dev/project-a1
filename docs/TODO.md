### Suggested Fixes & Improvements


| Area                    | Suggestion                                                                 |
|-------------------------|----------------------------------------------------------------------------|
| Ground Check            | Add a condition to prevent negative height (e.g. return `0.0` if < 0)      |
| Prompt Typo             | Fix: `"Enter the your time span"` → `"Enter your time span"`               |
| Variable Naming         | `distanceFallen` is misleading — rename to `currentHeight` or similar      |
| Magic Number            | Instead of dividing by `2`, consider using `kHalf = 0.5` for clarity       |
| Scaling                 | Extract loop into its own function for future expansion (planets, drag)    |


