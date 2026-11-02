/* Module: mpgvout.004
   Function: FUN_100032c8
   Address: 100032c8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100032c8(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  
  iVar5 = 4;
  do {
    uVar1 = *param_1;
    uVar2 = *(undefined8 *)(param_2 + (int)param_1);
    uVar4 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar3 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
    *param_3 = CONCAT26((uVar4 >> 8) - 0x80,
                        CONCAT24((short)CONCAT21(uVar4,(char)((ulonglong)uVar1 >> 0x10)) + -0x80,
                                 CONCAT22((byte)((ulonglong)uVar1 >> 8) - 0x80,(byte)uVar1 - 0x80)))
    ;
    param_3[1] = CONCAT26((byte)((ulonglong)uVar1 >> 0x38) - 0x80,
                          CONCAT24((byte)((ulonglong)uVar1 >> 0x30) - 0x80,
                                   CONCAT22((byte)((ulonglong)uVar1 >> 0x28) - 0x80,
                                            (byte)((ulonglong)uVar1 >> 0x20) - 0x80)));
    param_3[2] = CONCAT26((uVar3 >> 8) - 0x80,
                          CONCAT24((short)CONCAT21(uVar3,(char)((ulonglong)uVar2 >> 0x10)) + -0x80,
                                   CONCAT22((byte)((ulonglong)uVar2 >> 8) - 0x80,
                                            ((ushort)uVar2 & 0xff) - 0x80)));
    param_3[3] = CONCAT26((byte)((ulonglong)uVar2 >> 0x38) - 0x80,
                          CONCAT24((byte)((ulonglong)uVar2 >> 0x30) - 0x80,
                                   CONCAT22((byte)((ulonglong)uVar2 >> 0x28) - 0x80,
                                            (byte)((ulonglong)uVar2 >> 0x20) - 0x80)));
    param_1 = (undefined8 *)((int)param_1 + param_2 * 2);
    param_3 = param_3 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


