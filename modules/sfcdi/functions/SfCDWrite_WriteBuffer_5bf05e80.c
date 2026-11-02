/* Module: sfcdi.dll
   Function: SfCDWrite_WriteBuffer
   Address: 5bf05e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDWrite_WriteBuffer(struct HSFCDWRITE__ *,unsigned char *,unsigned long) */

long SfCDWrite_WriteBuffer(HSFCDWRITE__ *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint _Size;
  
                    /* 0x5e80  57  ?SfCDWrite_WriteBuffer@@YGJPAUHSFCDWRITE__@@PAEK@Z */
  if (((param_1 != (HSFCDWRITE__ *)0x0) && (param_2 != (uchar *)0x0)) && (param_3 != 0)) {
    do {
      if (*(int *)(param_1 + 0x1cfc) == 0) {
        piVar3 = FUN_5bf2c170((int *)(param_1 + 0x9c),0);
        if (piVar3 == (int *)0x0) {
          if (*(HANDLE *)(param_1 + 0x1cf4) != (HANDLE)0x0) {
            SetEvent(*(HANDLE *)(param_1 + 0x1cf4));
          }
          piVar3 = FUN_5bf2c170((int *)(param_1 + 0x9c),0xffffffff);
        }
        *(int **)(param_1 + 0x1cfc) = piVar3;
        *(int *)(param_1 + 0x1d04) = piVar3[3];
      }
      piVar3 = *(int **)(param_1 + 0x1cfc);
      uVar1 = *(uint *)(param_1 + 0x1d04);
      _Size = uVar1;
      if (param_3 <= uVar1) {
        _Size = param_3;
      }
      memmove((void *)(piVar3[2] + (piVar3[3] - uVar1)),param_2,_Size);
      iVar2 = *(int *)(param_1 + 0x1d04);
      param_2 = param_2 + _Size;
      param_3 = param_3 - _Size;
      *(uint *)(param_1 + 0x1d04) = iVar2 - _Size;
      if (iVar2 - _Size == 0) {
        FUN_5bf2c120((undefined4 *)(param_1 + 0xc4),piVar3);
        *(undefined4 *)(param_1 + 0x1cfc) = 0;
      }
    } while (param_3 != 0);
    return 0;
  }
  return -0x7ff8ffa9;
}


