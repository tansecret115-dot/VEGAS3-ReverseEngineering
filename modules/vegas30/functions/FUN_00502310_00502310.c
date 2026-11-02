/* Module: vegas30.exe
   Function: FUN_00502310
   Address: 00502310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00502310(int *param_1)

{
  int iVar1;
  int *unaff_EDI;
  int *unaff_retaddr;
  int *piVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (undefined1 *)&local_4;
  local_4 = 0;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_00633718);
  if (-1 < iVar1) {
    puStack_8 = (undefined1 *)0x0;
    piVar2 = unaff_retaddr;
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_4,unaff_retaddr,&puStack_8);
    if ((-1 < iVar1) && (unaff_retaddr != unaff_EDI)) {
      iVar1 = -0x7ffb1fc7;
    }
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return iVar1;
}


