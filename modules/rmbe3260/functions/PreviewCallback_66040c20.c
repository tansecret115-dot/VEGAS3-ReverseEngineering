/* Module: rmbe3260.dll
   Function: PreviewCallback
   Address: 66040c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static long __stdcall CEngineVideoStream::PreviewCallback(void *,void *,struct
   tag_PNStreamPreview *) */

long CEngineVideoStream::PreviewCallback(void *param_1,void *param_2,tag_PNStreamPreview *param_3)

{
                    /* 0x40c20  2
                       ?PreviewCallback@CEngineVideoStream@@KGJPAX0PAUtag_PNStreamPreview@@@Z */
  *(undefined4 *)((int)param_1 + 0x113) = *(undefined4 *)param_3;
  *(undefined4 *)((int)param_1 + 0x117) = *(undefined4 *)param_3;
  *(undefined4 *)((int)param_1 + 0x11b) = *(undefined4 *)(param_3 + 4);
  *(tag_PNStreamPreview *)((int)param_1 + 0x11f) = param_3[8];
  return 0;
}


