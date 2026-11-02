/* Module: rmbe3260.dll
   Function: FUN_66002900
   Address: 66002900
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66002900(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  ushort uVar3;
  
  iVar2 = 1;
  if (*(int *)((int)param_1 + 0x118) == 1) {
    uVar3 = 0;
    do {
      bVar1 = FUN_66002680(param_1,(uint)uVar3);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        iVar2 = 0;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    if (iVar2 == 0) {
      (**(code **)(**(int **)((int)param_1 + 0x108) + 0x90))();
    }
  }
  return iVar2;
}


