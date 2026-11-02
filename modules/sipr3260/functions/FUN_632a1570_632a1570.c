/* Module: sipr3260.dll
   Function: FUN_632a1570
   Address: 632a1570
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_632a1570(void *this,undefined4 param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  sVar2 = -1;
  pcVar5 = s_Ardubancel_Quazanga_632a50dc;
  pbVar3 = this;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_632a15a6:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_632a15ab;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_632a15a6;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_632a15ab:
  if (iVar4 != 0) {
    return 0x80070057;
  }
  if ((*(int *)((int)this + 0x41) == 0) && (*(int *)((int)this + 0x45) == 0)) {
    FUN_632a1420((int)this);
    FUN_632a12b0((int)this);
  }
  if (*(int *)((int)this + 0x41) != 0) {
    sVar2 = (**(code **)((int)this + 0x59))(*(int *)((int)this + 0x41),param_1);
  }
  if (*(int *)((int)this + 0x45) != 0) {
    sVar2 = (**(code **)((int)this + 0x69))(*(int *)((int)this + 0x45),param_1);
  }
  return -(uint)(sVar2 != 0) & 0x80070057;
}


