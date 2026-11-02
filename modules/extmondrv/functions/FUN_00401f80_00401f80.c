/* Module: extmondrv.dll
   Function: FUN_00401f80
   Address: 00401f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401f80(int param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 != 0) && (param_2 != (wchar_t *)0x0)) {
    iVar1 = wcscmp(param_2,L"Output");
    if (iVar1 == 0) {
      uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x14))
                        (*(undefined4 **)(param_1 + 0x14),&DAT_00455e5c,param_3);
      return uVar2;
    }
    return 0x80040216;
  }
  return 0x80004003;
}


