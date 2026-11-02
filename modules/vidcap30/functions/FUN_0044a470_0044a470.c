/* Module: vidcap30.exe
   Function: FUN_0044a470
   Address: 0044a470
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044a470(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  float10 fVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_104 [260];
  
  FUN_0044e2e0(*param_2,local_104,0x104);
  fVar2 = (float10)FUN_0042ed90(param_1);
  uVar5 = *param_2;
  uVar6 = 0;
  puVar4 = local_104;
  uVar3 = ftol(puVar4,uVar5,0);
  iVar1 = FUN_00443840(param_4,param_1,param_3,uVar3,puVar4,uVar5,uVar6);
  if (-1 < iVar1) {
    uVar3 = ftol();
    FUN_00443ec0(param_1,*param_4,uVar3);
    FUN_00443b20(*param_4,0x20,0x20);
    FUN_00443b20(*param_4,0x40,0x40);
    FUN_00443b20(*param_4,0x80,0x80);
    FUN_00443b20(*param_4,0x100,0x100);
    FUN_00444150(param_1,*param_4,(double)fVar2);
    FUN_00443b20(*param_4,0,2);
  }
  return iVar1;
}


