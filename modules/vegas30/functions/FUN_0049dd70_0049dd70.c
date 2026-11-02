/* Module: vegas30.exe
   Function: FUN_0049dd70
   Address: 0049dd70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049dd70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
    FUN_004583c0(param_1,1);
  }
  iVar1 = *(int *)(param_1 + 0x5d0);
  iVar2 = Transport_IsAnyPlaying();
  if (iVar2 == 0) {
    local_8 = 0;
    local_4 = 0;
  }
  else {
    local_8 = *(undefined4 *)(iVar1 + 600);
    local_4 = *(undefined4 *)(iVar1 + 0x25c);
  }
  FUN_004ce070(param_1,local_8,local_4);
  _SfWheel_AutoScrollOriginIcon_8(param_1 + 0xe8,2);
  _SfWheel_AutoScrollTerminate_4(param_1 + 0xe8);
  return;
}


