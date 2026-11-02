/* Module: sftrans1.dll
   Function: FUN_0052eb00
   Address: 0052eb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052eb00(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 **ppuStack_6c;
  undefined4 *puStack_60;
  undefined4 local_48 [14];
  undefined4 uStack_10;
  int *piStack_8;
  
  puStack_60 = local_48;
  local_48[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x1c))();
  if (-1 < iVar1) {
    ppuStack_6c = &puStack_60;
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if (-1 < iVar1) {
      (**(code **)(*piStack_8 + 0xc))
                (piStack_8,0,0,&ppuStack_6c,&stack0xffffffa4,0,0,&DAT_005547c0,uStack_10);
    }
  }
  return;
}


