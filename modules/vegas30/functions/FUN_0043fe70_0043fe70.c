/* Module: vegas30.exe
   Function: FUN_0043fe70
   Address: 0043fe70
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0043fe70(undefined4 param_1,HSFCD__ *param_2,int param_3,uint param_4,uint param_5)

{
  HSFCD__ *pHVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  
  pHVar1 = param_2;
  iVar2 = FUN_0043fd90(param_2,1,1);
  do {
    if (-1 < iVar2) {
LAB_0043fec0:
      param_2 = (HSFCD__ *)0x0;
      lVar5 = SfCDING_GetFreeSpaceData(pHVar1,(ulong *)&param_2,param_3);
      if ((param_5 < 0x80000000) && ((0 < (int)param_5 || (param_2 < param_4)))) {
        uVar3 = _SfGetString_8(DAT_00647204,0x6e68);
        SfMsgBox(param_1,0x10,uVar3);
LAB_0043ff0a:
        lVar5 = -0x7fffbffc;
      }
      return lVar5;
    }
    uVar3 = _SfGetString_8(DAT_00647204,0x129);
    iVar4 = SfMsgBox(param_1,0x31,uVar3);
    if (iVar4 != 1) {
      if (iVar2 < 0) goto LAB_0043ff0a;
      goto LAB_0043fec0;
    }
    iVar2 = FUN_0043fd90(pHVar1,1,1);
  } while( true );
}


