/* Module: encn3260.dll
   Function: FUN_66488800
   Address: 66488800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66488800(void *this,int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  piVar2 = *(int **)((int)this + 0x68);
  if (piVar2 != (int *)0x0) {
    pbVar5 = &DAT_664e2538;
    pbVar3 = *(byte **)(param_1 + 0x34);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_66488840:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_66488845;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_66488840;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_66488845:
    if (iVar4 != 0) {
      (**(code **)(*piVar2 + 0x2c))(piVar2,0x80004005);
      return 0x80040043;
    }
    (**(code **)(*piVar2 + 0x2c))(piVar2,0);
  }
  return 0x80040043;
}


