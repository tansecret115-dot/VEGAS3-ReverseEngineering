/* Module: sfcdi.dll
   Function: SfCDWrite_Stop
   Address: 5bf061f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDWrite_Stop(struct HSFCDWRITE__ *) */

long SfCDWrite_Stop(HSFCDWRITE__ *param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x61f0  56  ?SfCDWrite_Stop@@YGJPAUHSFCDWRITE__@@@Z */
  if (param_1 != (HSFCDWRITE__ *)0x0) {
    iVar1 = *(int *)(param_1 + 0x1cfc);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - *(int *)(param_1 + 0x1d04);
      iVar1 = *(int *)(param_1 + 0x1cfc);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0xc) / *(uint *)(iVar1 + 0x14);
      FUN_5bf2c120((undefined4 *)(param_1 + 0xc4),*(int **)(param_1 + 0x1cfc));
      *(undefined4 *)(param_1 + 0x1cfc) = 0;
      *(undefined4 *)(param_1 + 0x1d04) = 0;
    }
    piVar2 = FUN_5bf2c170((int *)(param_1 + 0x9c),0xffffffff);
    piVar2[6] = -1000;
    FUN_5bf2c120((undefined4 *)(param_1 + 0xc4),piVar2);
    SfCD_WaitForWriteThreadDeath(param_1,(HWND__ *)0x0,360000);
    return 0;
  }
  return -0x7ff8ffa9;
}


