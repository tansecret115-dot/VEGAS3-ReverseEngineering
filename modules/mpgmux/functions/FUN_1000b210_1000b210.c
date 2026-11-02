/* Module: mpgmux.dll
   Function: FUN_1000b210
   Address: 1000b210
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_1000b210(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x262c);
  if (param_3 < 0) {
    if (param_4 == 0) {
      param_3 = 0;
      goto LAB_1000b243;
    }
    *(undefined1 *)(param_2 + iVar1) = 0xff;
    iVar2 = param_2 + 1;
    if (iVar2 < *(int *)(param_1 + 0x2638)) goto LAB_1000b266;
  }
  else {
LAB_1000b243:
    iVar2 = *(int *)(param_1 + 0x2dc4);
    if (param_3 < iVar2) {
LAB_1000b289:
      uVar3 = *(uint *)(param_1 + 0x263c + param_3 * 8);
      uVar4 = uVar3 / 0x1194;
      if (uVar4 == 0) {
        *(undefined1 *)(param_2 + iVar1) = 0;
      }
      else {
        *(byte *)(param_2 + iVar1) = (char)(uVar4 / 10) << 4 | (byte)((ulonglong)uVar4 % 10);
        uVar3 = uVar3 % 0x1194;
      }
      iVar2 = param_2 + 1;
      if (*(int *)(param_1 + 0x2638) <= iVar2) {
        iVar2 = 0;
      }
      uVar4 = uVar3 / 0x4b;
      if (uVar4 == 0) {
        *(undefined1 *)(iVar2 + iVar1) = 0x80;
      }
      else {
        *(byte *)(iVar2 + iVar1) = ((byte)(uVar4 / 10) | 0xf8) << 4 | (byte)((ulonglong)uVar4 % 10);
        uVar3 = uVar3 % 0x4b;
      }
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 0x2638) <= iVar2) {
        iVar2 = 0;
      }
      *(byte *)(iVar2 + iVar1) = ((byte)(uVar3 / 10) | 0xf8) << 4 | (byte)((ulonglong)uVar3 % 10);
      return uVar3 / 10;
    }
    if (param_4 == 0) {
      if (iVar2 < 1) {
        param_3 = 0;
      }
      else {
        param_3 = iVar2 + -1;
      }
      goto LAB_1000b289;
    }
    *(undefined1 *)(param_2 + iVar1) = 0xff;
    iVar2 = param_2 + 1;
    if (iVar2 < *(int *)(param_1 + 0x2638)) goto LAB_1000b266;
  }
  iVar2 = 0;
LAB_1000b266:
  *(undefined1 *)(iVar2 + iVar1) = 0xff;
  uVar3 = iVar2 + 1;
  if (*(int *)(param_1 + 0x2638) <= (int)uVar3) {
    uVar3 = 0;
  }
  *(undefined1 *)(uVar3 + iVar1) = 0xff;
  return uVar3;
}


