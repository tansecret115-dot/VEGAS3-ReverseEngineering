/* Module: vegas30.exe
   Function: FUN_00498930
   Address: 00498930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00498930(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6
                 ,int param_7,uint param_8,int param_9,uint param_10,int param_11,int param_12,
                 int param_13)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *local_2c;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar6 = DAT_0064a8e4;
  uVar5 = DAT_0064a8e0;
  if (param_1 == (undefined4 *)0x0) {
    local_2c = param_1;
  }
  else {
    local_2c = (undefined4 *)*param_1;
  }
  do {
    if ((int)local_2c <= param_13) {
      return;
    }
    iVar1 = *(int *)(param_1[2] + param_13 * 4);
    if (((*(uint *)(iVar1 + 0x10) & 8) == 0) && ((*(uint *)(iVar1 + 0x10) & 0x100000) == 0)) {
      iVar2 = *(int *)(iVar1 + 0x218);
      uVar3 = *(uint *)(iVar2 + 0x80);
      uVar8 = *(uint *)(iVar2 + 0x90);
      iVar4 = *(int *)(iVar2 + 0x94);
      uVar10 = uVar3 + uVar8;
      iVar7 = *(int *)(iVar2 + 0x84) + iVar4 + (uint)CARRY4(uVar3,uVar8);
      iVar9 = (param_5 - iVar6) - (uint)(param_4 < uVar5);
      if ((iVar7 < iVar9) || ((iVar7 <= iVar9 && (uVar10 < param_4 - uVar5)))) {
LAB_00498a32:
        if ((*(uint *)(iVar1 + 0x20) != uVar8) || (*(int *)(iVar1 + 0x24) != iVar4)) {
          uVar12 = *(undefined4 *)(iVar2 + 0x8c);
          uVar11 = *(undefined4 *)(iVar2 + 0x88);
          iVar7 = 0;
          iVar9 = 0;
          goto LAB_00498a66;
        }
      }
      else {
        local_8 = uVar5 + param_6;
        iVar9 = iVar6 + param_7 + (uint)CARRY4(uVar5,param_6);
        if ((iVar9 < iVar7) || ((iVar9 <= iVar7 && (local_8 < uVar10)))) goto LAB_00498a32;
        uVar12 = *(undefined4 *)(iVar2 + 0x8c);
        uVar11 = *(undefined4 *)(iVar2 + 0x88);
        iVar9 = param_2 - uVar10;
        iVar7 = (param_3 - iVar7) - (uint)(param_2 < uVar10);
LAB_00498a66:
        FUN_00498540(iVar1,0,iVar9,iVar7,uVar3,*(int *)(iVar2 + 0x84),uVar8,iVar4,uVar11,uVar12);
      }
      if (param_12 != 0) {
        uVar3 = *(uint *)(*(int *)(iVar1 + 0x218) + 0x88);
        uVar8 = uVar3 - param_10;
        local_10 = uVar8 + param_8;
        local_c = ((*(int *)(*(int *)(iVar1 + 0x218) + 0x8c) - param_11) - (uint)(uVar3 < param_10))
                  + param_9 + (uint)CARRY4(uVar8,param_8);
        FUN_005c7320(iVar1,0,&local_10,0);
      }
    }
    param_13 = param_13 + 1;
  } while( true );
}


