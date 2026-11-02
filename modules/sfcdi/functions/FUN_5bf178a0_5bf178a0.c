/* Module: sfcdi.dll
   Function: FUN_5bf178a0
   Address: 5bf178a0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_5bf178a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uchar *puVar4;
  HCURSOR pHVar5;
  LPSTR pCVar6;
  long lVar7;
  
  puVar2 = param_1;
  iVar3 = SfCD_WaitForDisc((HSFCD__ *)*param_1,4,0,(_mediainfo *)0x0);
  if (iVar3 == 0) {
    puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xec);
    iVar3 = FUN_5bf25c20((HWND)0x0,0x41,puVar4);
    if (iVar3 == 2) {
      return -0x7ffb1ff4;
    }
    pHVar5 = (HCURSOR)FUN_5bf37b40(0x7f02);
    pHVar5 = SetCursor(pHVar5);
    SfCD_GetProcessTime((HSFCD__ *)*puVar2,1,(ulong *)&param_1);
    SfCD_WaitForDisc((HSFCD__ *)*puVar2,4,(ulong)param_1,(_mediainfo *)0x0);
    if (pHVar5 != (HCURSOR)0x0) {
      SetCursor(pHVar5);
    }
  }
  iVar3 = 2;
  puVar2[0x2c] = puVar2[0x2c] | 0xc;
  puVar1 = puVar2 + 0x31;
  pCVar6 = FUN_5bf283e0(DAT_5bf65fc4,0x109);
  FUN_5bf16bc0(puVar1,param_2,4,pCVar6,iVar3);
  FUN_5bf16940(puVar1,1);
  pCVar6 = FUN_5bf283e0(DAT_5bf65fc4,0xf5);
  FUN_5bf16ba0(puVar1,1,pCVar6);
  lVar7 = SfTAO_CloseSession((void *)puVar2[8]);
  if (lVar7 == 0) {
    lVar7 = FUN_5bf17820((int *)puVar2[7]);
  }
  FUN_5bf16c40(puVar1);
  puVar2[0x2c] = puVar2[0x2c] & 0xfffffff3;
  return lVar7;
}


