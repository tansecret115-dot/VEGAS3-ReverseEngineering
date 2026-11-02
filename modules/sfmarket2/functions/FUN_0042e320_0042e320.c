/* Module: sfmarket2.dll
   Function: FUN_0042e320
   Address: 0042e320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0042e320(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 local_4;
  
  puVar1 = param_4;
  *param_4 = 0;
  local_4 = 0;
  iVar2 = (**(code **)*param_2)(param_2,&DAT_00495f38,&local_4);
  if (-1 < iVar2) {
    param_1 = 0;
    iVar2 = (**(code **)(*unaff_EDI + 0xbc))(unaff_EDI,unaff_retaddr);
    if (-1 < iVar2) {
      iVar2 = FUN_0042e1f0(&param_1,unaff_EDI,puVar1);
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    (**(code **)(param_1 + 8))(&param_1);
  }
  return iVar2;
}


