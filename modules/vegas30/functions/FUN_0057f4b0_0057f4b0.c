/* Module: vegas30.exe
   Function: FUN_0057f4b0
   Address: 0057f4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057f4b0(code *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  BOOL BVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  tagMSG *ptVar9;
  code *pcVar10;
  undefined4 uVar11;
  int local_2c;
  tagMSG tStack_1c;
  
  piVar3 = DAT_0065a054;
  tStack_1c.wParam = 0;
  iVar8 = 1;
  uVar1 = *(undefined4 *)(DAT_0065a054[0xe] + 4);
  bVar2 = true;
  local_2c = 0;
  do {
    while (piVar4 = (int *)(**(code **)(*piVar3 + 8))(), piVar4 == (int *)0x0) {
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = 1;
      BVar5 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
      if (BVar5 == 0) {
        if ((param_1 != (code *)0x0) && (iVar8 = (*param_1)(&tStack_1c,5,param_2), iVar8 == 0)) {
          return 0;
        }
        if ((bVar2) && (iVar6 = (**(code **)(*piVar3 + 0x28))(local_2c), iVar6 != 0)) {
          local_2c = local_2c + 1;
        }
        else {
          bVar2 = false;
          WaitMessage();
        }
      }
      else {
        if (tStack_1c.message == 0x12) {
          return 0;
        }
        if (tStack_1c.message < 0x119) {
          if (((tStack_1c.message != 0x118) && (tStack_1c.message != 0xf)) &&
             (tStack_1c.message != 0xa0)) {
LAB_0057f63f:
            bVar2 = true;
            local_2c = 0;
          }
        }
        else if (tStack_1c.message != 0x200) goto LAB_0057f63f;
        ptVar9 = &tStack_1c;
        pcVar10 = param_1;
        uVar11 = param_2;
        uVar7 = FUN_0057f440(ptVar9,param_1,param_2);
        iVar8 = FUN_0057f6d0(uVar1,0,uVar7,ptVar9,pcVar10,uVar11);
      }
      if (iVar8 == 0) {
        return 0;
      }
    }
    BVar5 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,3);
    if (BVar5 == 0) {
      iVar6 = (**(code **)(*piVar4 + 4))(0);
      if (iVar6 == 0) {
        if (param_1 == (code *)0x0) {
          iVar8 = 1;
        }
        else {
          iVar8 = (*param_1)(&tStack_1c,5,param_2);
          if (iVar8 == 0) {
            return 0;
          }
        }
        if ((bVar2) && (iVar6 = (**(code **)(*piVar3 + 0x28))(local_2c), iVar6 != 0)) {
          local_2c = local_2c + 1;
        }
        else {
          bVar2 = false;
          WaitMessage();
        }
      }
    }
    else {
      if (tStack_1c.message == 0x12) {
        return 0;
      }
      if (tStack_1c.message < 0x119) {
        if (((tStack_1c.message != 0x118) && (tStack_1c.message != 0xf)) &&
           (tStack_1c.message != 0xa0)) {
LAB_0057f53d:
          bVar2 = true;
          local_2c = 0;
        }
      }
      else if (tStack_1c.message != 0x200) goto LAB_0057f53d;
      iVar6 = (**(code **)(*piVar4 + 4))(&tStack_1c);
      if (iVar6 == 0) {
        ptVar9 = &tStack_1c;
        pcVar10 = param_1;
        uVar11 = param_2;
        uVar7 = FUN_0057f440(ptVar9,param_1,param_2);
        iVar8 = FUN_0057f6d0(uVar1,0,uVar7,ptVar9,pcVar10,uVar11);
      }
    }
    if (iVar8 == 0) {
      return 0;
    }
  } while( true );
}


