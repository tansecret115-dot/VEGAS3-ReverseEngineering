/* Module: wmfplug2.dll
   Function: FUN_0043e020
   Address: 0043e020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0043e092) */
/* WARNING: Removing unreachable block (ram,0x0043e0c4) */
/* WARNING: Removing unreachable block (ram,0x0043e0e0) */
/* WARNING: Removing unreachable block (ram,0x0043e0e2) */
/* WARNING: Removing unreachable block (ram,0x0043e0e9) */
/* WARNING: Removing unreachable block (ram,0x0043e0ef) */
/* WARNING: Removing unreachable block (ram,0x0043e115) */
/* WARNING: Removing unreachable block (ram,0x0043e123) */
/* WARNING: Removing unreachable block (ram,0x0043e15b) */
/* WARNING: Removing unreachable block (ram,0x0043e172) */
/* WARNING: Removing unreachable block (ram,0x0043e192) */
/* WARNING: Removing unreachable block (ram,0x0043e17d) */
/* WARNING: Removing unreachable block (ram,0x0043e188) */
/* WARNING: Removing unreachable block (ram,0x0043e1b3) */
/* WARNING: Removing unreachable block (ram,0x0043e1c6) */
/* WARNING: Removing unreachable block (ram,0x0043e1e0) */
/* WARNING: Removing unreachable block (ram,0x0043e1d1) */
/* WARNING: Removing unreachable block (ram,0x0043e1d9) */
/* WARNING: Removing unreachable block (ram,0x0043e1fe) */
/* WARNING: Removing unreachable block (ram,0x0043e216) */
/* WARNING: Removing unreachable block (ram,0x0043e21c) */
/* WARNING: Removing unreachable block (ram,0x0043e239) */
/* WARNING: Removing unreachable block (ram,0x0043e23f) */
/* WARNING: Removing unreachable block (ram,0x0043e24f) */
/* WARNING: Removing unreachable block (ram,0x0043e257) */
/* WARNING: Removing unreachable block (ram,0x0043e269) */
/* WARNING: Removing unreachable block (ram,0x0043e277) */

int * FUN_0043e020(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if ((*(int *)(param_1 + 0x31c) == 0) &&
     ((piVar1 = (int *)FUN_0043dae0(param_1), (int)piVar1 < 0 || ((int)piVar1 < 0)))) {
    *(undefined4 *)(param_1 + 0x31c) = 2;
  }
  return piVar1;
}


