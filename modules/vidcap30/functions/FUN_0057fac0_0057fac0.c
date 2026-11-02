/* Module: vidcap30.exe
   Function: FUN_0057fac0
   Address: 0057fac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_0057fac0(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *unaff_EDI;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00584838;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return -0x7ffbfdf7;
  }
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  (**(code **)*puVar1)(puVar1,&DAT_005a1678);
  puVar2 = puStack_8;
  if ((&local_10 == (int *)0x0) ||
     (iVar3 = (**(code **)(local_10 + 0xc))(&local_10,puStack_8), iVar3 != 0)) {
    iVar3 = FUN_0057fc80(puVar2);
  }
  else {
    iVar3 = FUN_0057fbb0(puVar2);
    local_10 = -1;
    if (-1 < iVar3) {
      if (&local_10 != (int *)0x0) {
        (*pcRam00000007)(&local_10);
      }
      ExceptionList = unaff_EDI;
      return 0;
    }
  }
  if (&local_10 != (int *)0x0) {
    local_10 = -1;
    (*pcRam00000007)(&local_10);
  }
  ExceptionList = unaff_EDI;
  return iVar3;
}


