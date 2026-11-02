/* Module: vegas30k.dll
   Function: FUN_0118f3a0
   Address: 0118f3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118f3a0(int param_1,undefined4 *param_2)

{
  undefined1 local_10 [4];
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  byte bStack_9;
  byte local_7;
  
  *param_2 = *(undefined4 *)(param_1 + 0x6c);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if ((*(int *)(param_1 + 0x14) != 0) || (*(int *)(param_1 + 0x18) != 0)) {
    FUN_01180040(*(undefined4 *)(param_1 + 0x28),local_10);
    param_2[1] = CONCAT12(uStack_a,CONCAT11(uStack_b,local_c)) & 0xff;
    param_2[2] = CONCAT12(bStack_9,CONCAT11(uStack_a,uStack_b)) & 0xff;
    param_2[3] = CONCAT11(bStack_9,uStack_a) & 0xff;
    param_2[4] = CONCAT12(local_7,(ushort)bStack_9) & 0xff;
    param_2[5] = (uint)local_7;
  }
  return 0;
}


