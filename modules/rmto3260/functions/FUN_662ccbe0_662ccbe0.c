/* Module: rmto3260.dll
   Function: FUN_662ccbe0
   Address: 662ccbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662ccbe0(void *this,int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)((int)param_1 + 0x6e);
  iVar2 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_662ccc20(this,param_1,uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}


