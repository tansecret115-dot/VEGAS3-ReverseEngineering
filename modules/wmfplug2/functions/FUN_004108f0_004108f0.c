/* Module: wmfplug2.dll
   Function: FUN_004108f0
   Address: 004108f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004108f0(void *this,undefined4 param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  int unaff_EBP;
  byte *pbVar7;
  bool bVar8;
  int *local_4;
  
  local_4 = this;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,&param_2,&local_4);
  piVar2 = local_4;
  if (-1 < iVar3) {
    iVar3 = -0x7ff8ffa9;
    if (*local_4 == 0x28) {
      pbVar7 = &DAT_0047bae8;
      pbVar5 = (byte *)(local_4 + 1);
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00410951:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00410956;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00410951;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00410956:
      if (iVar6 == 0) {
        if (*(int *)(*(int *)(unaff_EBP + 0x424) + 0x3e) == 0) {
          puVar4 = FUN_0040c450(*(int *)((int)this + 0xc));
          *(undefined1 **)(*(int *)(unaff_EBP + 0x424) + 0x3e) = puVar4;
          if (*(int *)(*(int *)(unaff_EBP + 0x424) + 0x3e) != 0) {
            *(undefined4 *)(*(int *)(unaff_EBP + 0x424) + 0x3a) = 0x7c;
          }
        }
        iVar6 = *(int *)(*(int *)(unaff_EBP + 0x424) + 0x3e);
        if (iVar6 == 0) {
          iVar3 = -0x7ff8fff2;
        }
        else {
          iVar3 = FUN_00414df0((uint *)&stack0xfffffff8,piVar2[3]);
          if (-1 < iVar3) {
            *(undefined4 *)(iVar6 + 8) = 1;
            *(int *)(iVar6 + 0x38) = unaff_EBP;
            *(undefined4 *)(iVar6 + 0x48) = 0;
            *(int *)(iVar6 + 0x44) = piVar2[5];
            *(int *)(iVar6 + 0x3c) = piVar2[2];
            *(int *)(iVar6 + 0x40) = piVar2[4];
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}


