/* Module: sfcdi.dll
   Function: FUN_5bf17be0
   Address: 5bf17be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5bf17be0(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  LPSTR pCVar3;
  uchar *puVar4;
  HCURSOR pHVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  _mediainfo local_2c [44];
  
  uVar6 = param_2;
  puVar2 = param_1;
  puVar1 = param_1 + 0x31;
  param_1[0x2c] = param_1[0x2c] | 0xc;
  *puVar1 = param_2;
  FUN_5bf16a50(puVar1,param_1[5]);
  FUN_5bf169c0(puVar1,0);
  iVar9 = 2;
  pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,0xf8);
  FUN_5bf16bc0(puVar1,uVar6,1,pCVar3,iVar9);
  FUN_5bf16940(puVar1,1);
  pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,0xf5);
  FUN_5bf16ba0(puVar1,1,pCVar3);
  iVar9 = SfCD_WaitForDisc((HSFCD__ *)*puVar2,3,0,(_mediainfo *)0x0);
  if (iVar9 == 0) {
    puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xf6);
    FUN_5bf25c20((HWND)0x0,0x40,puVar4);
    pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,0xf7);
    FUN_5bf16ba0(puVar1,1,pCVar3);
    pHVar5 = (HCURSOR)FUN_5bf37b40(0x7f02);
    pHVar5 = SetCursor(pHVar5);
    SfCD_GetProcessTime((HSFCD__ *)*puVar2,1,(ulong *)&param_1);
    param_2 = SfCD_WaitForDisc((HSFCD__ *)*puVar2,3,(ulong)param_1,local_2c);
    if (pHVar5 != (HCURSOR)0x0) {
      SetCursor(pHVar5);
    }
    if (param_2 == 0) {
      iVar9 = SfCD_TestDiscType(local_2c,1);
      puVar7 = (undefined4 *)((iVar9 != 0) + 0x8004e0c9);
      goto LAB_5bf17d80;
    }
  }
  uVar8 = 0;
  puVar2[0x37] = 0;
  uVar6 = (**(code **)(*(int *)puVar2[6] + 0x20))();
  puVar7 = param_1;
  if (uVar6 != 0) {
    do {
      (**(code **)(*(int *)puVar2[6] + 0x24))(uVar8);
      param_2 = FUN_5bf171b0((int)puVar2);
      puVar7 = (undefined4 *)SfTAO_BurnTrack((void *)puVar2[8],uVar8);
      if (((int)puVar7 < 0) || (puVar7 = (undefined4 *)FUN_5bf17b80(puVar2), (int)puVar7 < 0))
      break;
      puVar7 = (undefined4 *)FUN_5bf17820((int *)puVar2[7]);
      uVar8 = uVar8 + 1;
      puVar2[0x37] = puVar2[0x37] + param_2;
    } while (uVar8 < uVar6);
  }
LAB_5bf17d80:
  FUN_5bf16c40(puVar1);
  puVar2[0x2c] = puVar2[0x2c] & 0xfffffff3;
  return puVar7;
}


