/* Module: vegas30.exe
   Function: FUN_004e7420
   Address: 004e7420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e7420(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int local_2ac;
  int local_2a8;
  uint local_2a4;
  int local_2a0;
  int local_29c;
  uint local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  uint *local_288;
  undefined1 local_284 [4];
  undefined4 auStack_280 [10];
  undefined1 local_258;
  undefined4 local_257;
  undefined1 auStack_104 [260];
  
  uVar4 = DAT_0064b108;
  iVar1 = FUN_004e7350(DAT_0064b108,&local_2a8,&local_2a0,local_284,&local_2a4,&local_2ac,&local_294
                       ,&local_29c);
  if (DAT_0064b514 != (HWND)0x0) {
    uVar2 = _SfGetMillisec_0();
    if (((uVar2 < DAT_0064ce20) || (DAT_0064b518 + DAT_0064ce20 < uVar2)) && (local_2a4 != 0)) {
      local_290 = 1;
      local_28c = 4;
      local_298 = (uint)(local_2a0 + local_2ac * 100) / local_2a4;
      local_288 = &local_298;
      DAT_0064ce20 = uVar2;
      SendMessageA(DAT_0064b514,0x4a,DAT_00647624,(LPARAM)&local_290);
    }
  }
  if ((local_2a8 != 0) && (*(code **)(local_2a8 + 0x24) != (code *)0x0)) {
    (**(code **)(local_2a8 + 0x24))(uVar4,local_2a8,0x113);
  }
  local_258 = DAT_0060f98c;
  puVar5 = &local_257;
  for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (iVar1 != 0) {
    if (local_2a8 != 0) {
      (**(code **)(local_2a8 + 0x28))(local_2a8,&local_258,0x154);
    }
    FUN_004e83d0(1,&local_258);
    FUN_004e84a0(local_2a0,local_2ac,local_2a4);
    return;
  }
  iVar1 = FUN_004e8670();
  if (iVar1 != 0) {
    if (local_2ac != 0) {
      uVar4 = 0x4f99;
      if (local_29c == -0x7ffb1ff4) {
        uVar4 = 0x4f97;
      }
      else if (local_29c < 0) {
        uVar4 = 0x4f98;
      }
      uVar7 = 1;
      puVar5 = auStack_280;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      auStack_280[0] = 1;
      uVar6 = __allmul(local_294,0,10000,0);
      _SfNanoTimeToText_20(auStack_104,auStack_280,uVar6,uVar7);
      puVar8 = auStack_104;
      uVar4 = _SfGetString_8(DAT_00647204,uVar4);
      SfPrintF(&local_258,uVar4,puVar8);
    }
    FUN_004e83d0(0,&local_258);
  }
  FUN_004e72f0();
  return;
}


