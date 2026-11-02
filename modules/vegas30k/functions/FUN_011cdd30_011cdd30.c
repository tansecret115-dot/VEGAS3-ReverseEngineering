/* Module: vegas30k.dll
   Function: FUN_011cdd30
   Address: 011cdd30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011cdd30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint local_4;
  
  puVar2 = param_2;
  param_2 = (undefined4 *)((uint)param_2[1] / (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0xc));
  local_4 = *(uint *)(param_1 + 0x70) / (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0xc);
  FUN_011cb3b0(&param_2,&local_4);
  if ((undefined4 *)local_4 != param_2) {
    uVar1 = *puVar2;
    param_2 = (undefined4 *)
              _SfAudio_ResampleStupid_20(*(undefined4 *)(param_1 + 700),uVar1,local_4,uVar1,param_2)
    ;
  }
  puVar2[1] = (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0xc) * (int)param_2;
  return;
}


