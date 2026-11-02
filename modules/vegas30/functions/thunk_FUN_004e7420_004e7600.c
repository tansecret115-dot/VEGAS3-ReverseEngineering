/* Module: vegas30.exe
   Function: thunk_FUN_004e7420
   Address: 004e7600
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_004e7420(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iStack_2ac;
  int iStack_2a8;
  uint uStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  uint *puStack_288;
  undefined1 auStack_284 [4];
  undefined4 auStack_280 [10];
  undefined1 uStack_258;
  undefined4 uStack_257;
  undefined1 auStack_104 [260];
  
  uVar4 = DAT_0064b108;
  iVar1 = FUN_004e7350(DAT_0064b108,&iStack_2a8,&iStack_2a0,auStack_284,&uStack_2a4,&iStack_2ac,
                       &uStack_294,&iStack_29c);
  if (DAT_0064b514 != (HWND)0x0) {
    uVar2 = _SfGetMillisec_0();
    if (((uVar2 < DAT_0064ce20) || (DAT_0064b518 + DAT_0064ce20 < uVar2)) && (uStack_2a4 != 0)) {
      uStack_290 = 1;
      uStack_28c = 4;
      uStack_298 = (uint)(iStack_2a0 + iStack_2ac * 100) / uStack_2a4;
      puStack_288 = &uStack_298;
      DAT_0064ce20 = uVar2;
      SendMessageA(DAT_0064b514,0x4a,DAT_00647624,(LPARAM)&uStack_290);
    }
  }
  if ((iStack_2a8 != 0) && (*(code **)(iStack_2a8 + 0x24) != (code *)0x0)) {
    (**(code **)(iStack_2a8 + 0x24))(uVar4,iStack_2a8,0x113);
  }
  uStack_258 = DAT_0060f98c;
  puVar5 = &uStack_257;
  for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (iVar1 != 0) {
    if (iStack_2a8 != 0) {
      (**(code **)(iStack_2a8 + 0x28))(iStack_2a8,&uStack_258,0x154);
    }
    FUN_004e83d0(1,&uStack_258);
    FUN_004e84a0(iStack_2a0,iStack_2ac,uStack_2a4);
    return;
  }
  iVar1 = FUN_004e8670();
  if (iVar1 != 0) {
    if (iStack_2ac != 0) {
      uVar4 = 0x4f99;
      if (iStack_29c == -0x7ffb1ff4) {
        uVar4 = 0x4f97;
      }
      else if (iStack_29c < 0) {
        uVar4 = 0x4f98;
      }
      uVar7 = 1;
      puVar5 = auStack_280;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      auStack_280[0] = 1;
      uVar6 = __allmul(uStack_294,0,10000,0);
      _SfNanoTimeToText_20(auStack_104,auStack_280,uVar6,uVar7);
      puVar8 = auStack_104;
      uVar4 = _SfGetString_8(DAT_00647204,uVar4);
      SfPrintF(&uStack_258,uVar4,puVar8);
    }
    FUN_004e83d0(0,&uStack_258);
  }
  FUN_004e72f0();
  return;
}


