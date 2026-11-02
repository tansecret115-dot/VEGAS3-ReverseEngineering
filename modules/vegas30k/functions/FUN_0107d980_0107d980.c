/* Module: vegas30k.dll
   Function: FUN_0107d980
   Address: 0107d980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107d980(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    do {
      bVar1 = *(byte *)(iVar6 + param_1);
      if ((*(int *)(param_5 + iVar5 * 8) == 0) && (*(int *)(param_5 + 4 + iVar5 * 8) == 0x3ff00000))
      {
        uVar4 = (ushort)bVar1 + (*(byte *)(param_2 + 2) ^ 0x80);
      }
      else {
        iVar2 = ftol();
        if (iVar2 < -0x80) {
          uVar4 = (ushort)bVar1;
        }
        else if (iVar2 < 0x80) {
          uVar4 = (ushort)bVar1 + (ushort)(byte)((byte)iVar2 ^ 0x80);
        }
        else {
          uVar4 = bVar1 + 0xff;
        }
      }
      if ((short)uVar4 < -0x80) {
        uVar3 = 0x80;
      }
      else {
        uVar3 = 0x7f;
        if (uVar4 < 0x80) {
          uVar3 = (undefined1)uVar4;
        }
      }
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar6 + param_1) = uVar3;
      if (param_4 == iVar5) {
        iVar5 = 0;
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 3;
    } while (iVar6 < param_3);
  }
  return;
}


