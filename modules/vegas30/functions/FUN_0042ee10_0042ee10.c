/* Module: vegas30.exe
   Function: FUN_0042ee10
   Address: 0042ee10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042ee10(undefined4 param_1,HMENU param_2)

{
  uint uVar1;
  UINT UVar2;
  UINT UVar3;
  long lVar4;
  EMIXERTYPE EVar5;
  undefined4 uVar6;
  UINT nPos;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  CHAR local_100 [256];
  
  uVar1 = DAT_00648690;
  CheckMenuItem(param_2,0xa1ea,(DAT_00648690 & 1) << 3);
  CheckMenuItem(param_2,0xa1eb,(uVar1 & 2) << 2);
  CheckMenuItem(param_2,0xa285,(DAT_00648694 & 2) << 2);
  UVar2 = GetMenuItemCount(param_2);
  nPos = UVar2;
  while (0 < (int)UVar2) {
    nPos = nPos - 1;
    UVar3 = GetMenuItemID(param_2,nPos);
    if (((UVar3 < 0xa24e) || (0xa268 < UVar3)) && ((UVar3 < 0xa203 || (0xa222 < UVar3)))) break;
    UVar2 = UVar2 - 1;
    DeleteMenu(param_2,UVar2,0x400);
  }
  lVar4 = Mixer_NumBusTypePorts(1);
  EVar5 = Mixer_GetMixerType((ISFMixer *)0x0);
  if (EVar5 == 1) {
    bVar9 = SBORROW4(lVar4,1);
    iVar7 = lVar4 + -1;
    bVar8 = lVar4 == 1;
    if (!bVar8) goto LAB_0042eecd;
  }
  lVar4 = 0;
  bVar9 = false;
  iVar7 = -1;
  bVar8 = false;
LAB_0042eecd:
  if (!bVar8 && bVar9 == iVar7 < 0) {
    UVar2 = 0xa24f;
    do {
      iVar7 = UVar2 - 0xa20e;
      uVar6 = _SfGetString_8(DAT_00647204,0x4f2e);
      SfPrintF(local_100,uVar6,iVar7);
      AppendMenuA(param_2,(-(uint)(UVar2 != 0xa24f) & 0xffffffe0) + 0x20,UVar2,local_100);
      CheckMenuItem(param_2,UVar2,-(uint)((1 << ((byte)UVar2 & 0x1f) & uVar1) != 0) & 8);
      iVar7 = UVar2 - 0xa24d;
      UVar2 = UVar2 + 1;
    } while (iVar7 < lVar4);
  }
  lVar4 = Mixer_NumBusTypePorts(4);
  uVar1 = DAT_00648698;
  iVar7 = 0;
  if (0 < lVar4) {
    do {
      if (iVar7 < 9) {
        iVar10 = iVar7 + 1;
        uVar6 = _SfGetString_8(DAT_00647204,0x4f2f);
LAB_0042efc5:
        SfPrintF(local_100,uVar6,iVar10);
      }
      else {
        if (iVar7 != 9) {
          iVar10 = iVar7 + 1;
          uVar6 = _SfGetString_8(DAT_00647204,0x4f31);
          goto LAB_0042efc5;
        }
        uVar6 = _SfGetString_8(DAT_00647204,0x4f30);
        SfPrintF(local_100,uVar6);
      }
      AppendMenuA(param_2,(-(uint)(iVar7 != 0) & 0xffffffe0) + 0x20,iVar7 + 0xa203U,local_100);
      CheckMenuItem(param_2,iVar7 + 0xa203U,-(uint)((1 << ((byte)iVar7 & 0x1f) & uVar1) != 0) & 8);
      iVar7 = iVar7 + 1;
    } while (iVar7 < lVar4);
  }
  return;
}


