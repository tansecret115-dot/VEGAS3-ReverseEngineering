/* Module: vegas30.exe
   Function: FUN_00569240
   Address: 00569240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00569240(int param_1,int param_2,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  BOOL BVar1;
  char *lpString2;
  long lVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_2 + 600) = 0xffffffff;
  pt.y = param_4;
  pt.x = param_3;
  BVar1 = PtInRect((RECT *)(param_1 + 0x344),pt);
  if (BVar1 == 0) {
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar1 = PtInRect((RECT *)(param_1 + 0x354),pt_00);
    if (BVar1 == 0) {
      pt_01.y = param_4;
      pt_01.x = param_3;
      BVar1 = PtInRect((RECT *)(param_1 + 0x364),pt_01);
      if (BVar1 == 0) {
        pt_02.y = param_4;
        pt_02.x = param_3;
        BVar1 = PtInRect((RECT *)(param_1 + 0x374),pt_02);
        if (BVar1 == 0) {
          pt_03.y = param_4;
          pt_03.x = param_3;
          BVar1 = PtInRect((RECT *)(param_1 + 0x394),pt_03);
          if (BVar1 == 0) {
            pt_04.y = param_4;
            pt_04.x = param_3;
            BVar1 = PtInRect((RECT *)(param_1 + 0x3a4),pt_04);
            if (BVar1 == 0) {
              return 0;
            }
            *(LONG *)(param_1 + 0x24) = ((RECT *)(param_1 + 0x3a4))->left;
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3a8);
            lpString2 = "Insert Bus";
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3ac);
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3b0);
            uVar3 = 0x8d;
          }
          else {
            *(LONG *)(param_1 + 0x24) = ((RECT *)(param_1 + 0x394))->left;
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x398);
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x39c);
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3a0);
            uVar3 = 0x8c;
            lVar2 = Mixer_CanAddFXBus();
            if (lVar2 != 0) {
              return 0x8c;
            }
            lpString2 = (char *)_SfGetString_8(DAT_00647204,0x4f75);
          }
        }
        else {
          *(LONG *)(param_1 + 0x24) = ((RECT *)(param_1 + 0x374))->left;
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x378);
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x37c);
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x380);
          uVar3 = 0x8b;
          lpString2 = (char *)_SfGetString_8(DAT_00647204,0x4f4a);
        }
      }
      else {
        *(LONG *)(param_1 + 0x24) = ((RECT *)(param_1 + 0x364))->left;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x368);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x36c);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x370);
        uVar3 = 0x8a;
        lpString2 = (char *)_SfGetString_8(DAT_00647204,0x4f49);
      }
    }
    else {
      *(LONG *)(param_1 + 0x24) = ((RECT *)(param_1 + 0x354))->left;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x358);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x35c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x360);
      uVar3 = 0x88;
      lpString2 = (char *)_SfGetString_8(DAT_00647204,0x4f48);
    }
  }
  else {
    *(LONG *)(param_1 + 0x24) = ((RECT *)(param_1 + 0x344))->left;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x348);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x34c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x350);
    uVar3 = 0x86;
    lpString2 = (char *)_SfGetString_8(DAT_00647204,0x4f47);
  }
  if (lpString2 != (LPCSTR)0x0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x840;
    lstrcpynA((LPSTR)(param_2 + 0xd4),lpString2,0x3c);
    *(undefined1 *)(param_2 + 0x10f) = 0;
  }
  return uVar3;
}


