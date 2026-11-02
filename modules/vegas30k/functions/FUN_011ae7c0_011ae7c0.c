/* Module: vegas30k.dll
   Function: FUN_011ae7c0
   Address: 011ae7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_011ae7c0(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  
  _Memory = calloc(1,0x170);
  if (_Memory == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *_Memory = param_2;
  _Memory[1] = *param_3;
  _Memory[2] = param_3[1];
  _Memory[3] = param_3[2];
  _Memory[4] = param_3[3];
  *(undefined2 *)(_Memory + 5) = *(undefined2 *)(param_3 + 4);
  _Memory[6] = param_7;
  _Memory[7] = param_5;
  _Memory[8] = param_6;
  dwBytes = (uint)*(ushort *)(_Memory + 4) * *(int *)(param_1 + 0x878);
  _Memory[10] = dwBytes;
  hMem = GlobalAlloc(2,dwBytes);
  pvVar2 = GlobalLock(hMem);
  _Memory[9] = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    free(_Memory);
    return (undefined4 *)0x0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x878);
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  _Memory[10] = uVar1;
  _SfAudio_FillSilence_12(_Memory + 1,pvVar2,uVar1);
  _Memory[0x18] = 0;
  (**(code **)(*param_2 + 0x5c))(param_2,_Memory + 0x1a);
  iVar3 = (**(code **)(*param_2 + 0x54))(param_2);
  _Memory[0x19] = (uint)(iVar3 == 0);
  return _Memory;
}


