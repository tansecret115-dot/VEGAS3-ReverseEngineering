/* Module: vegas30.exe
   Function: FUN_005403e0
   Address: 005403e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005403e0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = -0x7ff8ffa9;
  if (((param_3 != 0) && (param_1 != 0)) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    iVar2 = FUN_005404e0(param_1,param_2);
    if (-1 < iVar2) {
      _Memory = (undefined4 *)*param_2;
      *_Memory = 0x46;
      uVar4 = FUN_0053f910(param_1);
      *(undefined8 *)(_Memory + 2) = uVar4;
      _Memory[1] = param_1;
      _Memory[4] = *(undefined4 *)(param_3 + 0x8e0);
      _Memory[5] = *(undefined4 *)(param_3 + 0x8e4);
      uVar1 = *(uint *)(param_3 + 0x8f0);
      iVar2 = *(int *)(param_3 + 0x8f4);
      _Memory[8] = uVar1 - 2;
      _Memory[9] = iVar2 - (uint)(uVar1 < 2);
      _Memory[6] = _Memory[8] + _Memory[4];
      _Memory[7] = _Memory[9] + _Memory[5] + (uint)CARRY4(_Memory[8],_Memory[4]);
      _Memory[10] = *(undefined4 *)(param_3 + 4);
      uVar3 = _SfDosGetDateTime_4((uchar *)(param_3 + 0xc));
      _Memory[0xb] = uVar3;
      _Memory[0xd] = _Memory[0xd] & 0xfffffffb;
      _mbscpy((uchar *)(_Memory + 0xf),(uchar *)(param_3 + 0xc));
      uVar3 = _SfGetFileNamePtrA_4(_Memory + 0xf);
      _Memory[0xe] = uVar3;
      iVar2 = FUN_00540570(param_1,_Memory);
      if (iVar2 < 0) {
        free(_Memory);
        *param_2 = 0;
      }
    }
  }
  return iVar2;
}


