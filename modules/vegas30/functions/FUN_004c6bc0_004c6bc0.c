/* Module: vegas30.exe
   Function: FUN_004c6bc0
   Address: 004c6bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c6bc0(int param_1,undefined4 param_2,HMENU param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  UINT UVar3;
  long lVar4;
  EMIXERTYPE EVar5;
  int iVar6;
  undefined4 uVar7;
  UINT nPos;
  bool bVar8;
  bool bVar9;
  UINT UVar10;
  uchar local_100 [256];
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  iVar2 = FUN_0052b710(uVar1,param_2,0);
  CheckMenuItem(param_3,0xa2b2,-(uint)(iVar2 != 0) & 8);
  iVar2 = FUN_0052b710(uVar1,param_2,1);
  UVar10 = 0;
  if (iVar2 != 0) {
    iVar2 = Mixer_IsSurroundType((ISFMixer *)0x0);
    if (iVar2 == 0) {
      UVar10 = 8;
    }
    else {
      UVar10 = 0;
    }
  }
  CheckMenuItem(param_3,0xa2b3,UVar10);
  UVar10 = GetMenuItemCount(param_3);
  nPos = UVar10;
  while (0 < (int)UVar10) {
    nPos = nPos - 1;
    UVar3 = GetMenuItemID(param_3,nPos);
    if (((UVar3 < 0xa316) || (0xa330 < UVar3)) && ((UVar3 < 0xa2cb || (0xa2ea < UVar3)))) break;
    UVar10 = UVar10 - 1;
    DeleteMenu(param_3,UVar10,0x400);
  }
  lVar4 = Mixer_NumBusTypePorts(1);
  EVar5 = Mixer_GetMixerType((ISFMixer *)0x0);
  if (EVar5 == 1) {
    bVar9 = SBORROW4(lVar4,1);
    iVar2 = lVar4 + -1;
    bVar8 = lVar4 == 1;
    if (!bVar8) goto LAB_004c6c95;
  }
  lVar4 = 0;
  bVar9 = false;
  iVar2 = -1;
  bVar8 = false;
LAB_004c6c95:
  if (!bVar8 && bVar9 == iVar2 < 0) {
    iVar2 = 0x41;
    do {
      SfPrintF(local_100,DAT_0063eaa0,iVar2);
      if (param_4 != 0) {
        _mbscat(local_100,DAT_0063eaa4);
      }
      UVar10 = (-(uint)(iVar2 != 0x41) & 0xffffffe0) + 0x20;
      iVar6 = FUN_0052b710(uVar1,param_2,iVar2 + -0x3e);
      if (iVar6 != 0) {
        UVar10 = UVar10 | 8;
      }
      AppendMenuA(param_3,UVar10,iVar2 + 0xa2d6,(LPCSTR)local_100);
      iVar6 = iVar2 + -0x3f;
      iVar2 = iVar2 + 1;
    } while (iVar6 < lVar4);
  }
  lVar4 = Mixer_NumBusTypePorts(4);
  iVar2 = 0;
  if (0 < lVar4) {
    do {
      if (iVar2 < 9) {
        iVar6 = iVar2 + 1;
        uVar7 = _SfGetString_8(DAT_00647204,0x4f2f);
LAB_004c6d95:
        SfPrintF(local_100,uVar7,iVar6);
      }
      else {
        if (iVar2 != 9) {
          iVar6 = iVar2 + 1;
          uVar7 = _SfGetString_8(DAT_00647204,0x4f31);
          goto LAB_004c6d95;
        }
        uVar7 = _SfGetString_8(DAT_00647204,0x4f30);
        SfPrintF(local_100,uVar7);
      }
      UVar10 = (-(uint)(iVar2 != 0) & 0xffffffe0) + 0x20;
      iVar6 = FUN_0052b710(uVar1,param_2,iVar2 + 0x40);
      if (iVar6 != 0) {
        UVar10 = UVar10 | 8;
      }
      AppendMenuA(param_3,UVar10,iVar2 + 0xa2cb,(LPCSTR)local_100);
      iVar2 = iVar2 + 1;
    } while (iVar2 < lVar4);
  }
  return;
}


