/* Module: qt4plug.dll
   Function: FUN_5f518e90
   Address: 5f518e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f518e90(void *this,undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int unaff_EBP;
  byte *pbVar5;
  bool bVar6;
  int *local_4;
  
  local_4 = this;
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&param_2,&local_4);
  if (-1 < iVar2) {
    if (*local_4 == 8) {
      pbVar5 = &DAT_5f5966f0;
      pbVar4 = (byte *)(local_4 + 1);
      do {
        bVar1 = *pbVar4;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_5f518ef5:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_5f518efa;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_5f518ef5;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_5f518efa:
      if (iVar2 == 0) {
        if (*(int *)(*(int *)(unaff_EBP + 0x424) + 0x3e) == 0) {
          puVar3 = FUN_5f513a80(*(int *)((int)this + 8));
          *(undefined1 **)(*(int *)(unaff_EBP + 0x424) + 0x3e) = puVar3;
          if (*(int *)(*(int *)(unaff_EBP + 0x424) + 0x3e) != 0) {
            *(undefined4 *)(*(int *)(unaff_EBP + 0x424) + 0x3a) = 0x14;
          }
        }
        return (-(uint)(*(int *)(*(int *)(unaff_EBP + 0x424) + 0x3e) != 0) & 0xfff93ff3) +
               0x8007000e;
      }
    }
    iVar2 = -0x7ff8ffa9;
  }
  return iVar2;
}


