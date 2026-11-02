/* Module: g2plug.dll
   Function: FUN_5f834cd0
   Address: 5f834cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f834d42) */
/* WARNING: Removing unreachable block (ram,0x5f834d74) */
/* WARNING: Removing unreachable block (ram,0x5f834d90) */
/* WARNING: Removing unreachable block (ram,0x5f834d92) */
/* WARNING: Removing unreachable block (ram,0x5f834d99) */
/* WARNING: Removing unreachable block (ram,0x5f834d9f) */
/* WARNING: Removing unreachable block (ram,0x5f834dc5) */
/* WARNING: Removing unreachable block (ram,0x5f834dd3) */
/* WARNING: Removing unreachable block (ram,0x5f834e0b) */
/* WARNING: Removing unreachable block (ram,0x5f834e22) */
/* WARNING: Removing unreachable block (ram,0x5f834e42) */
/* WARNING: Removing unreachable block (ram,0x5f834e2d) */
/* WARNING: Removing unreachable block (ram,0x5f834e38) */
/* WARNING: Removing unreachable block (ram,0x5f834e63) */
/* WARNING: Removing unreachable block (ram,0x5f834e76) */
/* WARNING: Removing unreachable block (ram,0x5f834e90) */
/* WARNING: Removing unreachable block (ram,0x5f834e81) */
/* WARNING: Removing unreachable block (ram,0x5f834e89) */
/* WARNING: Removing unreachable block (ram,0x5f834eae) */
/* WARNING: Removing unreachable block (ram,0x5f834ec6) */
/* WARNING: Removing unreachable block (ram,0x5f834ecc) */
/* WARNING: Removing unreachable block (ram,0x5f834ee9) */
/* WARNING: Removing unreachable block (ram,0x5f834eef) */
/* WARNING: Removing unreachable block (ram,0x5f834eff) */
/* WARNING: Removing unreachable block (ram,0x5f834f07) */
/* WARNING: Removing unreachable block (ram,0x5f834f19) */
/* WARNING: Removing unreachable block (ram,0x5f834f27) */

int * FUN_5f834cd0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if ((*(int *)(param_1 + 0x31c) == 0) &&
     ((piVar1 = (int *)FUN_5f834790(param_1), (int)piVar1 < 0 || ((int)piVar1 < 0)))) {
    *(undefined4 *)(param_1 + 0x31c) = 2;
  }
  return piVar1;
}


