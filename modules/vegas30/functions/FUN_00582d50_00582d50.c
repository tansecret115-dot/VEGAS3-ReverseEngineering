/* Module: vegas30.exe
   Function: FUN_00582d50
   Address: 00582d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00582d50(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar1 = (int *)(param_1 + 4);
  iVar4 = 0;
  if ((*piVar1 == 0) &&
     (iVar4 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0,0,0,0), iVar4 < 0)) {
    return iVar4;
  }
  uVar3 = param_3;
  uVar6 = 0;
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 8);
    while (param_3 = (*(code *)puVar5[-1])(*puVar5), param_3 != 0) {
      uVar2 = *puVar5;
      *(undefined4 *)(param_3 + 8) = puVar5[-2];
      *(undefined4 *)(param_3 + 0xc) = uVar2;
      iVar4 = _SfList_InsertList_16(*piVar1,0xffffffff,&param_3,1);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 3;
      if (uVar3 <= uVar6) {
        return iVar4;
      }
    }
    iVar4 = -0x7ff8fff2;
  }
  return iVar4;
}


