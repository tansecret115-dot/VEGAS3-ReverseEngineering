/* Module: rmbe3260.dll
   Function: FUN_6604e730
   Address: 6604e730
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl
FUN_6604e730(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [3];
  char *local_2c [3];
  int local_20 [3];
  int local_14 [3];
  int local_8;
  
  iVar9 = 1;
  local_8 = 1;
  puVar3 = FUN_6605bf20(&param_2,local_2c,2);
  pbVar4 = (byte *)*puVar3;
  pbVar7 = &DAT_6606edf8;
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_6604e77e:
      iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_6604e783;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_6604e77e;
    pbVar4 = pbVar4 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar8 = 0;
LAB_6604e783:
  FUN_6605b770((int *)local_2c);
  if (iVar8 == 0) {
    local_8 = 3;
    iVar9 = 3;
  }
  iVar8 = *(int *)(param_2 + -8);
  FUN_6605b670(local_20,&param_2);
  iVar2 = param_5;
  do {
    if (iVar8 <= iVar2) {
LAB_6604e875:
      FUN_6605b670(param_1,local_20);
      FUN_6605b770(local_20);
      FUN_6605b770(&param_2);
      return param_1;
    }
    iVar8 = 0;
    FUN_6605b670(local_14,local_20);
    iVar10 = iVar9;
    if (0 < iVar9) {
      do {
        iVar8 = FUN_6605bcc0(local_14,'\\');
        if (-1 < iVar8) {
          piVar5 = FUN_6605be40(local_14,local_38,iVar8 + 1);
          FUN_6605b900(local_14,piVar5);
          FUN_6605b770(local_38);
        }
        iVar9 = iVar9 + -1;
        iVar10 = local_8;
      } while (iVar9 != 0);
    }
    if ((iVar8 < 0) || (uVar6 = FUN_6605bcc0(local_14,'\\'), (int)uVar6 < 0)) {
      FUN_6605b770(local_14);
      goto LAB_6604e875;
    }
    FUN_6605bf20(local_14,local_2c,uVar6);
    FUN_6605bcf0(local_20,local_2c[0],&DAT_6606edf4,0);
    iVar9 = FUN_6605bcf0(local_20,s_______6606edec,&DAT_6606edf4,0);
    if (iVar9 == 0) {
      iVar10 = iVar10 + 1;
      local_8 = iVar10;
    }
    iVar8 = *(int *)(local_20[0] + -8);
    FUN_6605b770((int *)local_2c);
    FUN_6605b770(local_14);
    iVar9 = iVar10;
  } while( true );
}


