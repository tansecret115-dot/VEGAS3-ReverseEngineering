/* Module: pncrt.dll
   Function: FUN_78006500
   Address: 78006500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_78006500(DName *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DName::isEmpty(param_1);
  if (iVar2 == 0) {
    for (puVar1 = *(undefined4 **)param_1; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      iVar2 = (**(code **)*puVar1)();
      iVar3 = iVar3 + iVar2;
    }
  }
  return iVar3;
}


