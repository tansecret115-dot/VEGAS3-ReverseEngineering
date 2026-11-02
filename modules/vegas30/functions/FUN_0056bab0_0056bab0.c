/* Module: vegas30.exe
   Function: FUN_0056bab0
   Address: 0056bab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0056bab0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  HCURSOR hCursor;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_EBX;
  undefined4 *unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar8;
  ISFGraphBuilder *local_138;
  int local_134;
  int *local_130;
  int *piStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  HCURSOR local_120;
  undefined4 auStack_11c [71];
  
  puVar4 = DAT_0064b138;
  local_134 = 0;
  if (((*param_1 == 0) || (*(int *)param_1[2] == 0)) ||
     (pbVar1 = *(byte **)(*(int *)param_1[2] + 0x20c), pbVar1 == (byte *)0x0)) {
    return 0;
  }
  if (param_4 == 0) {
    if ((*pbVar1 & 1) != 0) {
      return 0x7f88;
    }
    lVar5 = Mixer_CanAddFXBus();
    local_134 = (-(uint)(lVar5 != 0) & 0x7f78) + 0x10;
  }
  else {
    if (param_4 == 2) {
      return 1;
    }
    if (param_4 == 3) {
      local_130 = (int *)0x0;
      local_128 = 0;
      hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
      local_120 = SetCursor(hCursor);
      local_138 = (ISFGraphBuilder *)0x0;
      lVar5 = Mixer_CanAddFXBus();
      if (lVar5 == 0) {
        lVar5 = Mixer_CreateGraph(&local_138);
        if (-1 < lVar5) {
          local_124 = 0x20;
          (**(code **)(*(int *)local_138 + 0x6c))(local_138,1,&local_124);
          local_138 = (ISFGraphBuilder *)0x0;
          iVar6 = (**(code **)*unaff_EBP)(unaff_EBP,&DAT_006335c8,&local_138);
          if (-1 < iVar6) {
            puVar8 = auStack_11c;
            for (iVar6 = 0x47; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            auStack_11c[0] = *(undefined4 *)(pbVar1 + 0x10c);
            auStack_11c[1] = *(undefined4 *)(pbVar1 + 0x110);
            auStack_11c[2] = *(undefined4 *)(pbVar1 + 0x114);
            auStack_11c[3] = *(undefined4 *)(pbVar1 + 0x118);
            iVar6 = _FXPackage_LoadPackage_16(piStack_12c,auStack_11c,1,1);
            if (iVar6 < 0) {
              iVar6 = _SfErrorHandler_MsgBox_24(DAT_00647624,0x13b,3,0x8004e031,pbVar1 + 8,0);
              if (iVar6 == 6) {
                _FXPackage_LoadPackage_16(piStack_12c,auStack_11c,0,0);
              }
              else if (iVar6 == 0x65) {
                FUN_00525890(pbVar1);
              }
            }
            (**(code **)(*piStack_12c + 8))(piStack_12c);
            local_134 = 0;
            piStack_12c = (int *)0x0;
            bVar3 = true;
            iVar6 = (**(code **)(*unaff_EBX + 0xb8))(unaff_EBX,&local_134);
            if ((-1 < iVar6) && (local_130 != (int *)0x0)) {
              iVar6 = (**(code **)(*local_130 + 0xc))(local_130,1,&local_128,0);
              if ((iVar6 < 0) || (local_138 == (ISFGraphBuilder *)0x0)) {
                uVar7 = _SfGetString_8(DAT_00647204,0x4f56);
                SfMsgBox(DAT_00647624,0x30,uVar7);
                bVar3 = false;
              }
              else {
                (**(code **)(*(int *)local_138 + 8))(local_138);
              }
              (**(code **)(*unaff_ESI + 8))(unaff_ESI);
              if (!bVar3) goto LAB_0056bcc7;
            }
            iVar6 = FUN_005d31e0(puVar4,5,local_138,1);
            if (iVar6 == 0) {
              FUN_005733d0();
              FUN_005749b0();
              puVar2 = (uint *)*puVar4;
              local_134 = 1;
              *puVar2 = *puVar2 | 0x8000;
            }
          }
        }
      }
LAB_0056bcc7:
      if (local_138 != (ISFGraphBuilder *)0x0) {
        (**(code **)(*(int *)local_138 + 8))(local_138);
      }
      SetCursor(local_120);
      return local_134;
    }
  }
  return local_134;
}


