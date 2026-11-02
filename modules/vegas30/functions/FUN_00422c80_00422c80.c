/* Module: vegas30.exe
   Function: FUN_00422c80
   Address: 00422c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00422c80(HWND param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  HWND pHVar9;
  HWND pHVar10;
  tagRECT *ptVar11;
  tagRECT local_60;
  undefined1 local_50 [80];
  
  pHVar10 = param_1;
  GetWindowRect(param_1,&local_60);
  local_60.left = local_60.right + local_60.left >> 1;
  local_60.top = local_60.top + local_60.bottom >> 1;
  local_60.right = local_60.left;
  local_60.bottom = local_60.top;
  _SfList_CreateExZ_32(&param_1,4,0x10,0x10,4,0,0,0);
  _SfLoadString_16(DAT_00647204,0x50dd,local_50,0x50);
  ptVar11 = &local_60;
  puVar7 = local_50;
  puVar8 = &LAB_00422e50;
  pHVar9 = param_1;
  uVar3 = _SfGetString_8(DAT_00647204,0x50dc);
  iVar4 = FUN_00506e60(0,2,uVar3,puVar7,puVar8,pHVar9,pHVar10,ptVar11);
  if ((iVar4 != 0) && (iVar1 = param_1->unused, iVar1 != 0)) {
    _SfList_Sort_12(param_1,0,&LAB_00422e20);
    lVar5 = Mixer_NumBusTypePorts(4);
    if (lVar5 != 0) {
      Transport_Suspend();
      uVar3 = DAT_0064b138;
      FUN_004e9f70(DAT_0064b138,0x137,0);
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = *(int *)(param_1[1].unused * iVar6 + param_1[2].unused);
          FUN_004c42f0(DAT_00647630,iVar2 - iVar6,lVar5);
          FUN_004eaed0(uVar3,0,iVar2,0x20);
          lVar5 = lVar5 + -1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        Mixer_RemoveFXBus(DAT_0064b144,*(ulong *)(param_1[1].unused * iVar1 + param_1[2].unused),1);
      }
      FUN_004eb2b0(uVar3);
      FUN_004ea040(uVar3,0);
      FUN_004c42b0(DAT_00647630,lVar5);
      Transport_Resume(0);
    }
  }
  _SfList_Destroy_4(param_1);
  return iVar4;
}


