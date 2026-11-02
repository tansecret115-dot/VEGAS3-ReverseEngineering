/* Module: vegas30k.dll
   Function: FUN_0118b990
   Address: 0118b990
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118b990(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint auStack_38 [4];
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_14;
  
  if ((code *)param_1[0x56] != (code *)0x0) {
    iVar2 = (*(code *)param_1[0x56])(param_1,0x8000,&param_4,param_1[0x57],&param_2,0);
    if (iVar2 < 0) {
      return iVar2;
    }
    param_1[0x58] = param_4 & 0xffff;
    param_1[0x59] = param_4 & 0xffff0000;
  }
  iVar2 = FUN_0118b870(param_4);
  if (-1 < iVar2) {
    param_1[0x44] = 0;
    if (param_1[0x4f] != 0) {
      puVar4 = (uint *)(param_1 + 0x46);
      puVar5 = auStack_38;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if ((((auStack_38[0] & auStack_38[1]) != 0xffffffff) &&
          ((uStack_28 & uStack_24) != 0xffffffff)) && ((param_2 & param_3) != 0xffffffff)) {
        iVar3 = uStack_24 + auStack_38[1] + (uint)CARRY4(uStack_28,auStack_38[0]);
        if ((iVar3 <= (int)param_3) &&
           ((iVar3 < (int)param_3 || (uStack_28 + auStack_38[0] < param_2)))) {
          uStack_14 = 0;
          (**(code **)(*param_1 + 0xec))(param_1,auStack_38);
        }
      }
    }
    piVar1 = (int *)param_1[0x7c];
    if (((piVar1 != (int *)0x0) && ((param_4 & 0x30000000) != 0)) &&
       (iVar2 = (**(code **)(*piVar1 + 0x144))(piVar1,param_2,param_3), (param_4 & 0x800000) != 0))
    {
      iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x168))((int *)param_1[0x7c]);
    }
    if (-1 < iVar2) {
      piVar1 = (int *)param_1[0x7f];
      if ((piVar1 != (int *)0x0) && ((param_4 & 0xc0000000) != 0)) {
        iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,param_2,param_3);
      }
      if (-1 < iVar2) {
        return iVar2;
      }
    }
    if ((code *)param_1[0x56] != (code *)0x0) {
      (*(code *)param_1[0x56])(param_1,0x8007,&param_4,param_1[0x57],0,0);
    }
  }
  return iVar2;
}


