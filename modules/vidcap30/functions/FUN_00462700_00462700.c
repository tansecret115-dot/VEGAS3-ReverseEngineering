/* Module: vidcap30.exe
   Function: FUN_00462700
   Address: 00462700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00462700(ushort *param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPCVOID pMem;
  uint uVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int *unaff_EBP;
  undefined4 *puVar7;
  int *local_29c;
  int local_298;
  uint uStack_294;
  undefined4 uStack_290;
  uint uStack_28c;
  int local_288;
  undefined1 auStack_284 [4];
  undefined1 auStack_280 [4];
  undefined4 local_27c [7];
  undefined4 local_260;
  undefined4 local_254;
  undefined4 local_24c;
  int iStack_248;
  undefined4 uStack_244;
  WCHAR aWStack_23c [24];
  undefined2 uStack_20c;
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
  puVar7 = local_27c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_24c = 0xf0000000;
  FUN_00462aa0(&DAT_005bba44,&local_288);
  local_29c = (int *)0x0;
  iVar5 = SfS4RWCreateInstance(0,&DAT_0058c528,&local_29c);
  if (-1 < iVar5) {
    iVar5 = FUN_00462440(local_29c);
    if ((-1 < iVar5) && (iVar5 = (**(code **)(*local_29c + 0x4c))(local_29c,3,0,0x3f), -1 < iVar5))
    {
      MultiByteToWideChar(0,1,"Sonic Foundry Video Capture 3.0",-1,aWStack_208,0x104);
      uStack_2 = 0;
      iVar5 = (**(code **)(*local_29c + 0x28))(local_29c,aWStack_208);
      if ((-1 < iVar5) && (iVar5 = FUN_00461d70(local_29c), -1 < iVar5)) {
        MultiByteToWideChar(0,1,"",-1,aWStack_23c,0x19);
        uStack_20c = 0;
        (**(code **)(*local_29c + 0x20))(local_29c,aWStack_23c);
        iVar5 = (**(code **)(*unaff_EBP + 0x30))(unaff_EBP,0,0);
        if (-1 < iVar5) {
          FUN_00462640(local_29c);
          iVar5 = (**(code **)(*local_29c + 0x34))(local_29c,&local_298,local_27c);
          if ((DAT_005bba40 != (LPCVOID)0x0) && (local_298 != 0)) {
            if (local_288 == 0) {
              iVar2 = FUN_0056f6d0();
              pMem = DAT_005bba40;
              if (iVar2 != 0) goto joined_r0x00462873;
            }
            else {
              iVar2 = FUN_0056f6d0();
              pMem = DAT_005bba40;
              if (iVar2 == 0) {
joined_r0x00462873:
                if (pMem != (LPCVOID)0x0) {
                  DAT_005bba40 = pMem;
                  FUN_0056dee0();
                  pvVar3 = GlobalHandle(pMem);
                  GlobalUnlock(pvVar3);
                  pvVar3 = GlobalHandle(pMem);
                  GlobalFree(pvVar3);
                }
                DAT_005bba40 = (LPCVOID)0x0;
              }
            }
          }
          if ((-1 < iVar5) && (iStack_248 != 0)) {
            *(undefined4 *)(DAT_005bba3c + 0x7f4) = uStack_244;
            iVar5 = FUN_00574500();
            if ((iVar5 < 0) || (iVar5 = FUN_005745c0(0xf0000000), iVar5 < 0)) {
              FUN_00462cc0();
              local_298 = 0;
            }
          }
        }
      }
    }
    (**(code **)(*local_29c + 8))(local_29c);
    if (-1 < iVar5) goto LAB_004628f7;
  }
  local_298 = 0;
LAB_004628f7:
  *param_1 = (ushort)(byte)((byte)*param_1 ^ (byte)local_27c[0]) ^ *param_1;
  *param_2 = local_260;
  *param_3 = local_254;
  FUN_00570a30(1,local_27c[0]);
  uVar4 = 0;
  if (local_298 != 0) {
    DAT_005bba34 = 0;
    uStack_294 = 0;
    if (DAT_005bba40 == (LPCVOID)0x0) {
      iVar5 = -0x7fffbffb;
    }
    else if (DAT_005bba44 == '\0') {
      iVar5 = FUN_00570cd0(&uStack_290,&uStack_294,1);
    }
    else {
      iVar5 = FUN_00570bd0(&uStack_290,&uStack_294,&DAT_005bba44,0,0);
      uStack_294 = 0x10;
    }
    iVar2 = FUN_00570cd0(&uStack_290,&uStack_28c,1);
    if (-1 < iVar2) {
      if ((-1 < iVar5) && (uStack_28c < uStack_294)) {
        uStack_28c = uStack_294;
      }
      iVar2 = _DAT_005ba2a8;
      if ((int)DAT_005bba30 <= (int)(uStack_28c & 0xffff)) {
        DAT_005bba34 = 0;
        _DAT_005bba38 = uStack_290;
        DAT_005bba30 = uStack_28c & 0xffff;
      }
    }
    _DAT_005ba2a8 = iVar2;
    uVar1 = DAT_005bba30;
    *param_1 = (ushort)(byte)((byte)*param_1 ^ (byte)DAT_005bba30) ^ *param_1;
    iVar5 = FUN_00570cd0(auStack_284,auStack_280,2);
    if (iVar5 < 0) {
      return 0;
    }
    uVar4 = 0;
    iVar5 = 0;
    local_298 = 0;
    if (0 < DAT_005b6568) {
      puVar6 = &DAT_005b6470;
      while (uVar1 != *puVar6) {
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 0x20;
        if (DAT_005b6568 <= iVar5) {
          return uVar4;
        }
      }
      _mbscpy(&DAT_005ba2ac,
              (&PTR_s_Sonic_Foundry_Video_Capture_3_0_0058c535_3_005b6468)[iVar5 * 0x20]);
      uVar4 = 1;
    }
  }
  return uVar4;
}


