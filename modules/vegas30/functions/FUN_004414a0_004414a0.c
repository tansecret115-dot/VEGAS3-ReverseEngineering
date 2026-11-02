/* Module: vegas30.exe
   Function: FUN_004414a0
   Address: 004414a0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004414a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  HGLOBAL hMem;
  int *piVar4;
  cdrcaps_tag *pcVar5;
  HSFCD__ **ppHVar6;
  HSFCD__ *local_224;
  uint local_220;
  int local_21c;
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined8 local_20c;
  uint local_204;
  HSFCD__ *local_200 [16];
  uint local_1c0;
  int local_188;
  undefined4 local_184;
  int local_180;
  int local_17c;
  int local_178;
  cdrcaps_tag local_168 [100];
  CHAR local_104 [260];
  
  local_214 = 0;
  local_224 = (HSFCD__ *)0x0;
  iVar1 = FUN_0043fc90(&local_224);
  if (iVar1 < 0) {
    uVar2 = _SfGetString_8(DAT_00647204,0x146);
    iVar1 = SfMsgBox(param_1,0x44,uVar2);
    if (iVar1 == 6) {
      FUN_004f8900(0,&DAT_006476a0,3);
    }
    return 1;
  }
  lVar3 = cdr_GetDeviceCaps(local_224,local_168);
  if (-1 < lVar3) {
    ppHVar6 = local_200;
    for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppHVar6 = (HSFCD__ *)0x0;
      ppHVar6 = ppHVar6 + 1;
    }
    ppHVar6 = local_200;
    local_184 = DAT_0064a7b8;
    local_200[0] = local_224;
    pcVar5 = local_168;
    for (iVar1 = 0x19; ppHVar6 = ppHVar6 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppHVar6 = *(HSFCD__ **)pcVar5;
      pcVar5 = pcVar5 + 4;
    }
    iVar1 = FUN_0043fc00(param_1,local_200);
    if (iVar1 == 1) {
      local_21c = local_178;
      local_210 = DAT_0064b138;
      local_20c = FUN_005b8d80(DAT_0064b138);
      if (local_20c == 0) {
        lVar3 = 0x4e001;
      }
      else {
        hMem = GlobalAlloc(0x40,0x138);
        piVar4 = GlobalLock(hMem);
        if (piVar4 == (int *)0x0) {
          lVar3 = -0x7ff8fff2;
        }
        else {
          piVar4[1] = 1;
          *piVar4 = (int)&PTR_LAB_00610724;
          piVar4[0x48] = 0;
          iVar1 = FUN_00452640(param_1,"Burn Disc at Once Audio CD",100,1);
          piVar4[2] = iVar1;
          piVar4[0x49] = 0;
          piVar4[0x4b] = 0;
          piVar4[0x4c] = 0;
          EnableWindow(DAT_00647624,0);
          if (local_21c != 0) {
            FUN_00440ea0(local_104);
            local_214 = 1;
          }
          if ((local_180 == 0) || (local_218 = 1, local_17c == 0)) {
            local_218 = 0;
          }
          local_204 = local_1c0 >> 0x17 & 1;
          local_220 = 1;
          if (1 < local_188 + 1U) {
            do {
              iVar1 = FUN_0043fd30(local_224,1);
              while (iVar1 != 0) {
                uVar2 = _SfGetString_8(DAT_00647204,0x6d6b);
                iVar1 = SfMsgBox(param_1,0x31,uVar2);
                if (iVar1 == 2) {
                  lVar3 = -0x7ffb1ff4;
                  goto LAB_0044174a;
                }
                iVar1 = FUN_0043fd30(local_224,1);
              }
              iVar1 = FUN_00441250(param_1,piVar4,local_200[0],(local_180 != 0) + '\x01',local_184,
                                   local_210,local_20c,0,local_21c,local_104,&local_214);
              lVar3 = 0;
              if (iVar1 != 0) break;
              if (local_218 == 0) {
                local_220 = local_220 + 1;
                cdr_Eject(local_200[0],1);
              }
              else {
                if (local_204 != 0) {
                  FUN_0043fe30(local_200);
                }
                local_180 = 0;
                local_218 = 0;
              }
            } while (local_220 < local_188 + 1U);
          }
LAB_0044174a:
          EnableWindow(DAT_00647624,1);
          (**(code **)(*piVar4 + 8))(piVar4);
        }
      }
      if (local_21c != 0) {
        DeleteFileA(local_104);
      }
    }
    else {
      lVar3 = -0x7ffb1ff4;
    }
  }
  FUN_0043fd20(local_224);
  return lVar3;
}


