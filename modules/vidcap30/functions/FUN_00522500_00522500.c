/* Module: vidcap30.exe
   Function: FUN_00522500
   Address: 00522500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_00522500(int param_1)

{
  int *unaff_EDI;
  int iVar1;
  
  (**(code **)**(undefined4 **)(param_1 + 8))();
  (**(code **)(*unaff_EDI + 0x1c))();
  (**(code **)(*(int *)(param_1 + 0x34) + 8))();
  (**(code **)(**(int **)(param_1 + 8) + 0x14))();
  OleSetContainedObject(*(LPUNKNOWN *)(param_1 + 8),1);
  (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 **)(param_1 + 8),&DAT_005a5c38);
  iVar1 = 0;
  (**(code **)(PTR_Rsrc_Bitmap_f_409_ImageData_47251__0059bd98 + 0x10))
            (&PTR_Rsrc_Bitmap_f_409_ImageData_47251__0059bd98,&DAT_005a5c28);
  (**(code **)(iVar1 + 0x14))(&stack0xffffffbc,(int *)(param_1 + 0x34));
  (**(code **)(*(int *)(param_1 + 0x30) + 8))((int *)(param_1 + 0x30));
  return;
}


