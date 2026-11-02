/* Module: rmme3260.dll
   Function: FUN_66206060
   Address: 66206060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66206060(int *param_1,int *param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)param_1 + 0x6e) = 100;
  *(undefined4 *)((int)param_1 + 0x72) = 100;
  *(undefined4 *)((int)param_1 + 0x76) = 500;
  *(undefined4 *)((int)param_1 + 0x7a) = 0x32;
  iVar1 = FUN_66203460(param_1,param_2);
  if (-1 < iVar1) {
    (**(code **)(*(int *)param_1[0xf] + 0xc))
              ((int *)param_1[0xf],s_ContentVersion_6626f464,0x100000);
  }
  return;
}


