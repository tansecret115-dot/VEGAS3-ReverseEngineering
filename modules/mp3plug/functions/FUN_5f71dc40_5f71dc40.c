/* Module: mp3plug.dll
   Function: FUN_5f71dc40
   Address: 5f71dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f71dc40(undefined4 param_1,int param_2)

{
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x10) != 0) && (*(int *)(in_EAX + 0x14) == 2)) {
    *(uint *)(in_EAX + 0x68) =
         (uint)((*(int *)(&DAT_5f76990c +
                         *(int *)(param_2 + 0x18) * 0x1bc + *(int *)(in_EAX + 0x58) * 4 +
                         *(int *)(param_2 + 4) * 0x94) * 3) % 0x12 != 0) +
         (*(int *)(&DAT_5f76990c +
                  *(int *)(param_2 + 0x18) * 0x1bc + *(int *)(in_EAX + 0x58) * 4 +
                  *(int *)(param_2 + 4) * 0x94) * 3) / 0x12;
    return;
  }
  *(uint *)(in_EAX + 0x68) =
       (uint)(*(int *)(in_EAX + 0x4c) % 0x12 != 0) + *(int *)(in_EAX + 0x4c) / 0x12;
  return;
}


