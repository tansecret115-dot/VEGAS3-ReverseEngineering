/* Module: sfpaplug.dll
   Function: FUN_004352e0
   Address: 004352e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00435352) */
/* WARNING: Removing unreachable block (ram,0x00435384) */
/* WARNING: Removing unreachable block (ram,0x004353a0) */
/* WARNING: Removing unreachable block (ram,0x004353a2) */
/* WARNING: Removing unreachable block (ram,0x004353a9) */
/* WARNING: Removing unreachable block (ram,0x004353af) */
/* WARNING: Removing unreachable block (ram,0x004353d5) */
/* WARNING: Removing unreachable block (ram,0x004353e3) */
/* WARNING: Removing unreachable block (ram,0x0043541b) */
/* WARNING: Removing unreachable block (ram,0x00435432) */
/* WARNING: Removing unreachable block (ram,0x00435452) */
/* WARNING: Removing unreachable block (ram,0x0043543d) */
/* WARNING: Removing unreachable block (ram,0x00435448) */
/* WARNING: Removing unreachable block (ram,0x00435473) */
/* WARNING: Removing unreachable block (ram,0x00435486) */
/* WARNING: Removing unreachable block (ram,0x004354a0) */
/* WARNING: Removing unreachable block (ram,0x00435491) */
/* WARNING: Removing unreachable block (ram,0x00435499) */
/* WARNING: Removing unreachable block (ram,0x004354be) */
/* WARNING: Removing unreachable block (ram,0x004354d6) */
/* WARNING: Removing unreachable block (ram,0x004354dc) */
/* WARNING: Removing unreachable block (ram,0x004354f9) */
/* WARNING: Removing unreachable block (ram,0x004354ff) */
/* WARNING: Removing unreachable block (ram,0x0043550f) */
/* WARNING: Removing unreachable block (ram,0x00435517) */
/* WARNING: Removing unreachable block (ram,0x00435529) */
/* WARNING: Removing unreachable block (ram,0x00435537) */

int * FUN_004352e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if ((*(int *)(param_1 + 0x31c) == 0) &&
     ((piVar1 = (int *)FUN_00434da0(param_1), (int)piVar1 < 0 || ((int)piVar1 < 0)))) {
    *(undefined4 *)(param_1 + 0x31c) = 2;
  }
  return piVar1;
}


