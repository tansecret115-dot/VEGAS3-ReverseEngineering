/* Module: mp3plug.dll
   Function: FUN_5f6f8410
   Address: 5f6f8410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6f8410(int param_1,uint param_2)

{
  int iVar1;
  int *in_EAX;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  in_EAX[7] = in_EAX[7] + param_1;
  in_EAX[8] = in_EAX[8] + param_1;
  uVar3 = (uint)*(ushort *)((int)in_EAX + 10) << ((byte)param_1 & 0x1f) | param_2 & 0xffff;
  iVar4 = in_EAX[3] - param_1;
  in_EAX[3] = iVar4;
  in_EAX[9] = in_EAX[9] | (uint)(in_EAX[5] == in_EAX[6]);
  uVar2 = (ushort)uVar3;
  if (-1 < iVar4) {
    *(ushort *)((int)in_EAX + 10) = uVar2;
    return;
  }
  uVar3 = uVar3 >> (-(char)iVar4 & 0x1fU);
  *(short *)(in_EAX[1] + in_EAX[5] * 2) = (short)uVar3;
  iVar1 = in_EAX[5];
  in_EAX[5] = iVar1 + 1;
  if (iVar1 + 1 == *in_EAX) {
    in_EAX[5] = 0;
  }
  *(ushort *)((int)in_EAX + 10) = uVar2 ^ (ushort)(uVar3 << (-(char)iVar4 & 0x1fU));
  in_EAX[3] = in_EAX[3] + 0x10;
  return;
}


