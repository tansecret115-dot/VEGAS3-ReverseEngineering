/* Module: vegas30.exe
   Function: FUN_005379a0
   Address: 005379a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005379a0(HWND param_1,LRESULT param_2,uint param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_retaddr;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  UINT UVar10;
  int *piVar11;
  WPARAM WVar12;
  undefined4 uVar13;
  LPARAM LVar14;
  int *piVar15;
  undefined4 local_4;
  
  iVar1 = param_2;
  if (param_3 == 9) {
    param_5 = (int *)0x0;
    iVar2 = FUN_00536dc0(param_1,param_2,&param_5);
    if (-1 < iVar2) {
      LVar14 = 0;
      WVar12 = 0;
      UVar10 = 0x147;
      param_2 = 0;
      pHVar3 = GetDlgItem(param_1,0x3eb);
      WVar12 = SendMessageA(pHVar3,UVar10,WVar12,LVar14);
      if (WVar12 != 0xffffffff) {
        LVar14 = 0;
        UVar10 = 0x150;
        pHVar3 = GetDlgItem(param_1,0x3eb);
        param_2 = SendMessageA(pHVar3,UVar10,WVar12,LVar14);
      }
      if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
        iVar2 = FUN_00601ab0(&local_4,&param_3,1);
        if (iVar2 < 0) {
          DAT_0064b4f0 = 1;
        }
        else if ((int)DAT_0064b4e0 <= (int)(param_3 & 0xff)) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_4;
          DAT_0064b4e0 = param_3 & 0xff;
        }
      }
      uVar5 = 48000;
      if (0x3f < (int)DAT_0064b4e0) {
        uVar5 = 96000;
      }
      if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
        iVar2 = FUN_00601ab0(&local_4,&param_3,1);
        if (iVar2 < 0) {
          DAT_0064b4f0 = 1;
        }
        else if ((int)DAT_0064b4e0 <= (int)(param_3 & 0xff)) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_4;
          DAT_0064b4e0 = param_3 & 0xff;
        }
      }
      uVar6 = 0x10;
      if (0x3f < (int)DAT_0064b4e0) {
        uVar6 = 0x18;
      }
      piVar4 = (int *)FUN_005e3f40();
      if ((piVar4 != (int *)0x0) && (DAT_0064b138 != 0)) {
        FUN_005e3f90(DAT_0064b138,piVar4);
      }
      uVar13 = *(undefined4 *)(iVar1 + 0x1448);
      piVar11 = *(int **)(iVar1 + 0xbb0);
      uVar9 = 1;
      iVar2 = iVar1 + 0xbb4;
      iVar8 = iVar1 + 0xb64;
      puVar7 = &param_2;
      piVar15 = piVar4;
      pHVar3 = GetParent(param_1);
      uVar6 = (**(code **)(*param_5 + 0x10))
                        (param_5,pHVar3,puVar7,iVar8,iVar2,uVar5,uVar6,uVar9,piVar11,uVar13,piVar15)
      ;
      (**(code **)(unaff_retaddr + 0x88))(DAT_0064b510,uVar6);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      FUN_00537320(param_1,iVar1,uVar5);
      (**(code **)(*piVar11 + 8))(piVar11);
      return 1;
    }
  }
  else if (param_3 == 0x3eb) {
    if (param_5 == (int *)0x1) {
      FUN_005378c0(param_1,param_2);
      return 1;
    }
  }
  else if ((param_3 == 0x3ec) && (param_5 == (int *)0x1)) {
    FUN_00537960(param_1,param_2);
  }
  return 1;
}


