/* Module: vidcap30.exe
   Function: FUN_0054d7b0
   Address: 0054d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d7b0(undefined4 param_1,undefined2 *param_2)

{
  undefined1 local_8 [2];
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if ((((*(byte *)(param_2 + 1) < 0xd) && (*(byte *)(param_2 + 1) != 0)) &&
      (*(byte *)((int)param_2 + 3) < 0x20)) &&
     (((*(byte *)((int)param_2 + 3) != 0 && (*(byte *)(param_2 + 2) < 0x18)) &&
      (*(byte *)(param_2 + 3) < 0x3d)))) {
    FUN_0054c3c0(local_8,*param_2);
    local_6 = *(undefined1 *)(param_2 + 1);
    local_4 = *(undefined1 *)(param_2 + 2);
    local_5 = *(undefined1 *)((int)param_2 + 3);
    local_3 = *(undefined1 *)((int)param_2 + 5);
    local_2 = *(undefined1 *)(param_2 + 3);
    FUN_0054c3e0(param_1,&DAT_005b8a1c,local_8,7);
    return;
  }
  FUN_00549570(param_1,"Invalid time specified for tIME chunk");
  return;
}


