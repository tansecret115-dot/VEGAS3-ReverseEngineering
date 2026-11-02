/* Module: encn3260.dll
   Function: FUN_664997a0
   Address: 664997a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664997a0(int param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x44))();
  *param_2 = sVar1;
  return ((-1 < sVar1) - 1 & 0x7fffbffb) + 0x80004005;
}


