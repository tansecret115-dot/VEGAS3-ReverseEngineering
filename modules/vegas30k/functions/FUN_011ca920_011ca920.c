/* Module: vegas30k.dll
   Function: FUN_011ca920
   Address: 011ca920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011ca920(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint local_4;
  
  puVar2 = param_2;
  local_4 = (uint)param_2[2] / (uint)*(ushort *)(*(int *)(param_1 + 0x90) + 0xc);
  param_2 = (undefined4 *)
            (*(uint *)(param_1 + 0xac) / (uint)*(ushort *)(*(int *)(param_1 + 0x90) + 0xc));
  FUN_011c7990(&local_4,&param_2);
  uVar1 = *puVar2;
  _SfAudio_Resample_20(*(undefined4 *)(param_1 + 0x90),uVar1,param_2,uVar1,local_4);
  puVar2[2] = (uint)*(ushort *)(*(int *)(param_1 + 0x90) + 0xc) * (int)param_2;
  return;
}


